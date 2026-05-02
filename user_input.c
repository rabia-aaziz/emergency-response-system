void inputUserInfo(struct Emergency *e) {
    printf("\n--- Member 2: User Input Module ---");
    printf("\nEnter Patient/Victim Name: ");
    
    // Clear buffer
    while(getchar() != '\n');
    
    // Logic: Scanset to accept spaces in strings
    scanf("%[^\n]s", e->name); 
    
    printf("Enter Contact Number (Format: 03xx-xxxxxxx): ");
    scanf("%s", e->phone);
    
    printf("Enter Live Address (Area, City in Pakistan): ");
    while(getchar() != '\n');
    scanf("%[^\n]s", e->address);
}
