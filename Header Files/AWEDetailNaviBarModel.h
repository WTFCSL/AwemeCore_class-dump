//
//     Generated by private class-dump
//

@class NSString, AWEDetailActivityLinkModel;

@interface AWEDetailNaviBarModel : NSObject {
    BOOL _showCloseButton;
    BOOL _isAIGCSticker;
    BOOL _isImageNoteSticker;
    NSString *_titleText;
    long long _collectState;
    long long _shareState;
    AWEDetailActivityLinkModel *_activityLinkModel;
}

@property (nonatomic) BOOL showCloseButton;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) long long collectState;
@property (nonatomic) long long shareState;
@property (retain, nonatomic) AWEDetailActivityLinkModel *activityLinkModel;
@property (nonatomic) BOOL isAIGCSticker;
@property (nonatomic) BOOL isImageNoteSticker;

- (BOOL)isAIGCSticker;
- (void)setIsAIGCSticker:(BOOL)arg0;
- (long long)collectState;
- (void)setCollectState:(long long)arg0;
- (BOOL)isImageNoteSticker;
- (void)setIsImageNoteSticker:(BOOL)arg0;
- (id)activityLinkModel;
- (void)setActivityLinkModel:(id)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;
- (long long)shareState;
- (void)setShowCloseButton:(BOOL)arg0;
- (BOOL)showCloseButton;
- (void)setShareState:(long long)arg0;

@end