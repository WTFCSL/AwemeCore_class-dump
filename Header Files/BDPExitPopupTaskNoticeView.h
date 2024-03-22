//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDPExitPopupTaskNoticeView : UIView {
    id /* block */ _exitAction;
    id /* block */ _continueAction;
    NSMutableArray *_tapGestureList;
}

@property (retain, nonatomic) NSMutableArray *tapGestureList;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ continueAction;

- (void)setTapGestureList:(id)arg0;
- (id)tapGestureList;
- (void)onExitBtnClick;
- (void)onContinueBtnClick;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)exitAction;
- (void)setExitAction:(id /* block */)arg0;
- (void)setupUI;
- (id /* block */)continueAction;
- (void)setContinueAction:(id /* block */)arg0;

@end