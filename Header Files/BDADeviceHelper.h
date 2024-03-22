//
//     Generated by private class-dump
//

@interface BDADeviceHelper : NSObject

+ (id)resolutionString;
+ (BOOL)isJailBroken;
+ (BOOL)isPadDevice;
+ (BOOL)judgePadDevice;
+ (BOOL)judge896Screen;
+ (BOOL)judge812Screen;
+ (BOOL)judge736Screen;
+ (BOOL)judge667Screen;
+ (BOOL)judge568Screen;
+ (BOOL)judge480Screen;
+ (BOOL)is480Screen;
+ (BOOL)is568Screen;
+ (BOOL)is667Screen;
+ (BOOL)is736Screen;
+ (BOOL)isScreenWidthLarge320;
+ (BOOL)isIpadProDevice;
+ (id)idfaString;
+ (float)OSVersionNumber;
+ (BOOL)isIPhoneXSeries;
+ (BOOL)isIPhoneXDevice;
+ (id)idfvString;
+ (double)ssOnePixel;
+ (long long)getTotalDiskSpace;
+ (unsigned long long)currentSplitScreenWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })windowSize;
+ (id)MACAddress;
+ (double)screenScale;
+ (unsigned long long)getDeviceType;
+ (struct CGSize { double x0; double x1; })resolution;
+ (id)platformName;
+ (long long)getFreeDiskSpace;
+ (id)currentLanguage;
+ (id)mainWindow;

@end
