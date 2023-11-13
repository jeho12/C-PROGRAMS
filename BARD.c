// This program gets information about an app from the Google Play Developer API and 
//Sends a message with this information using the Twilio API.
#include <stdio.h>
#include <string.h>

// Google Play Developer API key
#define GOOGLE_PLAY_API_KEY "YOUR_API_KEY"

// Twilio account SID and auth token
#define TWILIO_ACCOUNT_SID "YOUR_ACCOUNT_SID"
#define TWILIO_AUTH_TOKEN "YOUR_AUTH_TOKEN"

// Phone number to send the message to
#define TO_PHONE_NUMBER "+15555555555"

// Get information about an app from the Google Play Developer API
void get_app_info(char *app_id, char *title, char *description, float *rating) {
  // Create a new CURL handle
  

  // Set the URL to the Google Play Developer API endpoint
  char url[256];
  sprintf(url, "https://play.googleapis.com/androidpublisher/v3/applications/%s", app_id);

  // Set the HTTP header with the Google Play Developer API key
  char header[256];
  sprintf(header, "Authorization: Bearer %s", GOOGLE_PLAY_API_KEY);

  
  // Execute the CURL request
  char response[1024];
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)response);
  curl_easy_perform(curl);
  curl_easy_cleanup(curl);

  // Parse the JSON response
  json_t *root = json_loads(response, 0, NULL);
  if (root == NULL) {
    return;
  }

  // Get the app title
  json_t *title_json = json_object_get(root, "title");
  if (title_json != NULL) {
    strcpy(title, json_string_value(title_json));
  }

  // Get the app description
  json_t *description_json = json_object_get(root, "description");
  if (description_json != NULL) {
    strcpy(description, json_string_value(description_json));
  }

  // Get the app rating
  json_t *rating_json = json_object_get(root, "averageUserRating");
  if (rating_json != NULL) {
    *rating = json_number_value(rating_json);
  }

  // Free the JSON objects
  json_decref(root);
}

// Send a message using the Twilio API
void send_message(char *to_phone_number, char *message) {
  // Initialize Twilio
  twilio_init(TWILIO_ACCOUNT_SID, TWILIO_AUTH_TOKEN);

  // Create a new Twilio message
  twilio_message_t *message_client = twilio_message_new(to_phone_number, message);

  // Send the message
  twilio_message_send(message_client);

  // Clean up Twilio
  twilio_message_free(message_client);
  twilio_shutdown();
}

int main() {
  // Get the app ID from the user
  char app_id[256];
  printf("Enter the app ID: ");
  scanf("%s", app_id);

  // Get the app information
  char title[256];
  char description[1024];
  float rating;
  get_app_info(app_id, title, description, &rating);

  // Create a message with the app information
  char message[1024];
  sprintf(message, "App title: %s\nApp description: %s\nApp rating: %f", title, description, rating);

  // Send the message
  send_message(TO_PHONE_NUMBER, message);

  return 0;
}


