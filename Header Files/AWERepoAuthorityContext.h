//
//     Generated by private class-dump
//

@class NSString;

@interface AWERepoAuthorityContext : NSObject <NSCopying, NSCoding> {
    BOOL _downloadIgnoreVisibility;
    BOOL _duetIgnoreVisibility;
    BOOL _storyShareIgnoreVisibility;
    long long _downloadVerificationStatus;
    long long _duetVerificationStatus;
    long long _storyShareVerificationStatus;
    NSString *_downloadTypeErrorMessage;
    NSString *_itemDuetErrorMessage;
    NSString *_itemShareErrorMessage;
}

@property (nonatomic) BOOL downloadIgnoreVisibility;
@property (nonatomic) BOOL duetIgnoreVisibility;
@property (nonatomic) BOOL storyShareIgnoreVisibility;
@property (nonatomic) long long downloadVerificationStatus;
@property (nonatomic) long long duetVerificationStatus;
@property (nonatomic) long long storyShareVerificationStatus;
@property (copy, nonatomic) NSString *downloadTypeErrorMessage;
@property (copy, nonatomic) NSString *itemDuetErrorMessage;
@property (copy, nonatomic) NSString *itemShareErrorMessage;

- (BOOL)downloadIgnoreVisibility;
- (void)setDownloadIgnoreVisibility:(BOOL)arg0;
- (BOOL)duetIgnoreVisibility;
- (void)setDuetIgnoreVisibility:(BOOL)arg0;
- (BOOL)storyShareIgnoreVisibility;
- (void)setStoryShareIgnoreVisibility:(BOOL)arg0;
- (BOOL)isDownloadTypeError;
- (void)setDownloadVerificationStatus:(long long)arg0;
- (long long)downloadVerificationStatus;
- (id)downloadTypeErrorMessage;
- (void)setDownloadTypeErrorMessage:(id)arg0;
- (BOOL)isItemDuetError;
- (void)setDuetVerificationStatus:(long long)arg0;
- (id)itemDuetErrorMessage;
- (long long)duetVerificationStatus;
- (void)setItemDuetErrorMessage:(id)arg0;
- (BOOL)isItemShareError;
- (void)setStoryShareVerificationStatus:(long long)arg0;
- (id)itemShareErrorMessage;
- (long long)storyShareVerificationStatus;
- (void)setItemShareErrorMessage:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
