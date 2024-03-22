//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, UIImageView, NSArray, IESECLiveListBottomGuideModel, IESECLiveConfigContentItemModel, IESECLiveListBottomGuideContentView;
@protocol IESECLiveListBottomGuideViewDelegate;

@interface IESECLiveListBottomGuideView : UIView <IESECLiveConfigViewDelegate> {
    IESECLiveListBottomGuideModel *_bottomGuideInfo;
    id<IESECLiveListBottomGuideViewDelegate> _delegate;
    UIImageView *_backgroundView;
    IESECLiveListBottomGuideContentView *_leftView;
    IESECLiveListBottomGuideContentView *_rightView;
    NSString *_lastGuideWord;
    IESECLiveConfigContentItemModel *_matchConfigContent;
    NSMutableArray *_updatedLeftElementIndexArray;
    NSMutableArray *_updatedRightElementIndexArray;
    NSArray *_updatedLeftContent;
    NSArray *_updatedRightContent;
    NSMutableArray *_showTrackInfoArray;
}

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) IESECLiveListBottomGuideContentView *leftView;
@property (retain, nonatomic) IESECLiveListBottomGuideContentView *rightView;
@property (retain, nonatomic) NSString *lastGuideWord;
@property (retain, nonatomic) IESECLiveConfigContentItemModel *matchConfigContent;
@property (retain, nonatomic) NSMutableArray *updatedLeftElementIndexArray;
@property (retain, nonatomic) NSMutableArray *updatedRightElementIndexArray;
@property (retain, nonatomic) NSArray *updatedLeftContent;
@property (retain, nonatomic) NSArray *updatedRightContent;
@property (retain, nonatomic) NSMutableArray *showTrackInfoArray;
@property (retain, nonatomic) IESECLiveListBottomGuideModel *bottomGuideInfo;
@property (weak, nonatomic) id<IESECLiveListBottomGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (id)bottomGuideInfo;
- (void)setBottomGuideInfo:(id)arg0;
- (void)combinationBlockClickAction:(id)arg0;
- (void)updateGuideTextWithCategoryWord:(id)arg0;
- (void)updateBottomViewGuideInfo:(id)arg0;
- (id)getShowTrackInfoArray;
- (void)p_rightViewLayout;
- (void)setMatchConfigContent:(id)arg0;
- (void)p_resetLeftElementViewsShow:(BOOL)arg0;
- (void)p_resetRightElementViewsShow:(BOOL)arg0;
- (id)updatedLeftElementIndexArray;
- (id)updatedRightElementIndexArray;
- (id)lastGuideWord;
- (void)setLastGuideWord:(id)arg0;
- (id)updatedLeftContent;
- (id)p_updatedConfigContent:(id)arg0 withReplaceContent:(id)arg1 indexArray:(id)arg2;
- (void)setUpdatedLeftContent:(id)arg0;
- (id)updatedRightContent;
- (void)setUpdatedRightContent:(id)arg0;
- (id)matchConfigContent;
- (void)p_resetElementViewsShow:(BOOL)arg0;
- (void)p_accessibilityLabelTextConfiguration:(id)arg0;
- (void)setUpdatedLeftElementIndexArray:(id)arg0;
- (void)updateBottomLeftViewGuideInfo:(id)arg0;
- (void)updateBottomRightViewGuideInfo:(id)arg0;
- (id)showTrackInfoArray;
- (void)setUpdatedRightElementIndexArray:(id)arg0;
- (void)setShowTrackInfoArray:(id)arg0;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)leftView;
- (void)setLeftView:(id)arg0;
- (id)rightView;
- (void)setRightView:(id)arg0;

@end
