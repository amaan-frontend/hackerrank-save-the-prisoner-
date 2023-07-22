#include <stdio.h>

int saveThePrisoner(int n, int m, int s) {
    // Calculate the final position of the last candy
        int finalPosition = (s + m - 1) % n;
            
                // If the final position is 0, it means the last candy goes to the last prisoner
                    // Otherwise, it goes to the prisoner at the final position
                        return finalPosition == 0 ? n : finalPosition;
                        }
                        
                        int main() {
                            int t;
                                scanf("%d", &t);
                                
                                    while (t--) {
                                            int n, m, s;
                                                    scanf("%d %d %d", &n, &m, &s);
                                                            
                                                                    int result = saveThePrisoner(n, m, s);
                                                                            printf("%d\n", result);
                                                                                }
                                                                                
                                                                                    return 0;
                                                                                    }
                                                                                    
