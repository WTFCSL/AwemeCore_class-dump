//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelComicRetainExitAddShelf : NSObject {
    NSString *_title;
    NSString *_subTitle;
    NSString *_imageUrl;
    NSString *_darkImageUrl;
    NSString *_cancelText;
    NSString *_confirmText;
    long long _frequency;
    long long _currentNeedReadCount;
    long long _lastReadProgress;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (nonatomic) long long frequency;
@property (nonatomic) long long currentNeedReadCount;
@property (nonatomic) long long lastReadProgress;

- (void)setCancelText:(id)arg0;
- (void)updateWithDict:(id)arg0;
- (id)cancelText;
- (void)setCurrentNeedReadCount:(long long)arg0;
- (void)setLastReadProgress:(long long)arg0;
- (long long)currentNeedReadCount;
- (long long)lastReadProgress;
- (void)setDarkImageUrl:(id)arg0;
- (id)darkImageUrl;
- (void).cxx_destruct;
- (id)title;
- (void)setFrequency:(long long)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (long long)frequency;
- (void)setTitle:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;

@end
