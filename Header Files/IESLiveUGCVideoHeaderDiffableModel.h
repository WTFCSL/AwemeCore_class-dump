//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveUGCVideoHeaderDiffableModel : IESLiveUGCVideoDiffableModel {
    BOOL _changeButtonShow;
    NSString *_leftLabelText;
    NSString *_rightLabelText;
    id /* block */ _changeButtonBlock;
    NSString *_changeTitle;
}

@property (copy, nonatomic) NSString *leftLabelText;
@property (copy, nonatomic) NSString *rightLabelText;
@property (copy, nonatomic) id /* block */ changeButtonBlock;
@property (copy, nonatomic) NSString *changeTitle;
@property (nonatomic) BOOL changeButtonShow;

- (void)setRightLabelText:(id)arg0;
- (id)rightLabelText;
- (id)leftLabelText;
- (void)setLeftLabelText:(id)arg0;
- (id /* block */)changeButtonBlock;
- (void)setChangeButtonBlock:(id /* block */)arg0;
- (id)changeTitle;
- (void)setChangeTitle:(id)arg0;
- (BOOL)changeButtonShow;
- (void)setChangeButtonShow:(BOOL)arg0;
- (void).cxx_destruct;

@end