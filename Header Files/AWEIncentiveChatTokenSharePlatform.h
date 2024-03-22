//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImage;

@interface AWEIncentiveChatTokenSharePlatform : NSObject {
    long long _platform;
}

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) BOOL isExternalShare;
@property (readonly, copy, nonatomic) NSString *shareName;
@property (readonly, copy, nonatomic) NSString *shareGuideName;
@property (readonly, copy, nonatomic) NSArray *guideConfirmBackgroundColors;
@property (readonly, nonatomic) UIImage *shareImage;
@property (readonly, nonatomic) UIImage *guideConfirmImage;
@property (readonly, copy, nonatomic) NSString *trackName;

- (id)shareImage;
- (BOOL)openApp;
- (id)shareGuideName;
- (id)guideConfirmImage;
- (id)guideConfirmBackgroundColors;
- (BOOL)isExternalShare;
- (long long)platform;
- (id)initWithPlatform:(long long)arg0;
- (id)trackName;
- (id)shareName;

@end