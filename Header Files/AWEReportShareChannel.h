//
//     Generated by private class-dump
//

@class NSString;

@interface AWEReportShareChannel : AWEShareBaseChannel {
    NSString *_shareType;
}

@property (copy, nonatomic) NSString *shareType;

+ (id)channelWithType:(id)arg0;

- (id)shareImage;
- (void)checkTargetIndexWithContext:(id)arg0;
- (id)shareTitleFromSettings;
- (BOOL)shouldShowReportChannelInMiniLunaWithContext:(id)arg0;
- (BOOL)share;
- (void).cxx_destruct;
- (void)setShareType:(id)arg0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end