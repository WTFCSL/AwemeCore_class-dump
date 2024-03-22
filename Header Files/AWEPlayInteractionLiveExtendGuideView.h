//
//     Generated by private class-dump
//

@class BDImageView, AWELivePreviewExtendArea, UIView;

@interface AWEPlayInteractionLiveExtendGuideView : UIView {
    UIView *_liveExtendContentView;
    BDImageView *_iconContainerView;
    UIView *_rightInformationContainer;
    UIView *_torightInformationContainer;
    AWELivePreviewExtendArea *_extendData;
}

@property (retain, nonatomic) UIView *liveExtendContentView;
@property (retain, nonatomic) BDImageView *iconContainerView;
@property (retain, nonatomic) UIView *rightInformationContainer;
@property (retain, nonatomic) UIView *torightInformationContainer;
@property (retain, nonatomic) AWELivePreviewExtendArea *extendData;

- (id)extendData;
- (void)setExtendData:(id)arg0;
- (id)createPartsView:(id)arg0;
- (void)setRightInformationContainer:(id)arg0;
- (id)rightInformationContainer;
- (BOOL)informationIsChanged:(id)arg0;
- (id)p_getInformation:(id)arg0;
- (void)loadImageWithImageView:(id)arg0 imageURLList:(id)arg1;
- (id)liveExtendContentView;
- (id)p_parseFromDicData:(id)arg0;
- (void)setTorightInformationContainer:(id)arg0;
- (id)torightInformationContainer;
- (void)setLiveExtendContentView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg0;

@end