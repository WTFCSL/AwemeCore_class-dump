//
//     Generated by private class-dump
//

@class UIImageView, NSString, AWEHPPinTopUIMediumVideoModel;

@interface AWEHPPinTopUIMediumVideo : UIView <AWEHPPinTopUILifeCycleProtocol> {
    AWEHPPinTopUIMediumVideoModel *_configModel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) AWEHPPinTopUIMediumVideoModel *configModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (void)setupUI;
- (double)viewWidth;

@end
