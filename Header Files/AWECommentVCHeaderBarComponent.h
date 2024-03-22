//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWECommentVCHeaderBarView;

@interface AWECommentVCHeaderBarComponent : UIView <AWECommentVCHeaderBarComponentProtocol> {
    BOOL _isFromMaskVC;
    BOOL _isFromDescriptionPanel;
    AWECommentVCHeaderBarView *_barView;
    AWEAwemeModel *_model;
    unsigned long long _barType;
}

@property (retain, nonatomic) AWECommentVCHeaderBarView *barView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) BOOL isFromMaskVC;
@property (nonatomic) BOOL isFromDescriptionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBarType:(unsigned long long)arg0;
- (void)updateUIInVideoDescriptionPanelIfNeeded;
- (void)setIsFromMaskVC:(BOOL)arg0;
- (void)setIsFromDescriptionPanel:(BOOL)arg0;
- (BOOL)isFromDescriptionPanel;
- (void)updateWithAwemeModel:(id)arg0 referString:(id)arg1 enterSource:(unsigned long long)arg2;
- (void)setBarViewStatus;
- (void)setBarViewFromDescriptionPanel;
- (BOOL)isFromMaskVC;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)barType;
- (void)dealloc;
- (double)viewHeight;
- (id)barView;
- (void)setBarView:(id)arg0;

@end
