//
//     Generated by private class-dump
//

@class IESECLiveToggleModel, NSMutableArray, UIView;
@protocol IESECLiveToggleTabDelegate;

@interface IESECLiveToggleTab : UIView {
    BOOL _isSliding;
    IESECLiveToggleModel *_toggleModel;
    id<IESECLiveToggleTabDelegate> _delegate;
    NSMutableArray *_toggleTabElements;
    UIView *_sliderView;
}

@property (retain, nonatomic) NSMutableArray *toggleTabElements;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) IESECLiveToggleModel *toggleModel;
@property (weak, nonatomic) id<IESECLiveToggleTabDelegate> delegate;

- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (void)scrollDidScrollToPercent:(double)arg0;
- (id)initWithToggleModel:(id)arg0;
- (id)toggleModel;
- (void)clickToggleTabElement:(id)arg0;
- (id)toggleTabElements;
- (void)setToggleModel:(id)arg0;
- (void)setToggleTabElements:(id)arg0;
- (id)sliderView;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setSliderView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
