//
//     Generated by private class-dump
//

@class NSString, ACCChapterInputView, UIView;
@protocol ACCChapterInputControllerDelegate;

@interface ACCChapterInputController : NSObject <ACCChapterInputViewDelegate> {
    BOOL _isSpaceClose;
    id<ACCChapterInputControllerDelegate> _delegate;
    NSString *_enterFrom;
    ACCChapterInputView *_textView;
    long long _timestamp;
    UIView *_spaceView;
}

@property (retain, nonatomic) ACCChapterInputView *textView;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) UIView *spaceView;
@property (weak, nonatomic) id<ACCChapterInputControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSpaceClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)spaceView;
- (BOOL)isSpaceClose;
- (void)chapterInputViewReachMax;
- (void)spaceViewClick;
- (void)chapterInputViewConfirmText:(id)arg0;
- (void)chapterInputViewCancelText:(id)arg0;
- (void)chapterEditButtonClickedWithContent:(id)arg0 timestamp:(long long)arg1;
- (void)setIsSpaceClose:(BOOL)arg0;
- (void)setSpaceView:(id)arg0;
- (id)textView;
- (long long)timestamp;
- (void).cxx_destruct;
- (id)delegate;
- (void)setTextView:(id)arg0;
- (void)setTimestamp:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (void)setAttributedPlaceholder:(id)arg0;

@end