#include <stdio.h>

int main() {
    float temp, conv;
    char input_scale, output_scale;

    printf("Enter temperature: ");
    scanf("%f %c", &temp, &input_scale);

    printf("Convert to (C/K/F): ");
    scanf(" %c", &output_scale);

    switch (input_scale)
    {
        case 'F':
        case 'f':
            switch (output_scale)
            {
                case 'C':
                case 'c':
                    conv = (temp-32)*5/9;
                    printf("%.2f F = %.2f C\n",temp,conv);
                    break;
                case 'K':
                case 'k':
                    conv = (temp-32)*5/9+273.15;
                    printf("%.2f F = %.2f K\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        case 'C':
        case 'c':
            switch (output_scale)
            {
                case 'F':
                case 'f':
                    conv = temp*9/5+32;
                    printf("%.2f C = %.2f F\n",temp,conv);
                    break;
                case 'K':
                case 'k':
                    conv = temp+273.15;
                    printf("%.2f C = %.2f K\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        case 'K':
        case 'k':
            switch (output_scale)
            {
                case 'F':
                case 'f':
                    conv = (temp-273.15)*9/5+32;
                    printf("%.2f K = %.2f F\n",temp,conv);
                    break;
                case 'C':
                case 'c':
                    conv = temp-273.15;
                    printf("%.2f K = %.2f C\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        default:
            printf("Invalid temperature scale");
            break;
    }

    return 0;
}
