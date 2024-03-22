//
//     Generated by private class-dump
//

@class BDSCClarityViewUIModel, BDSCControlViewUIModel, NSDictionary, BDSCSearchListUIModel, BDByteScreenCastLabel;

@protocol BDSCUIDefaultConfigProtocol <NSObject>

@property (retain, nonatomic) BDByteScreenCastLabel *screenCastLabel;
@property (retain, nonatomic) BDSCSearchListUIModel *searchList;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityView;
@property (copy, nonatomic) NSDictionary *resultBanner;
@property (nonatomic) BOOL buttonSelectedInBold;
@property (copy, nonatomic) NSDictionary *colorPalette;
@property (copy, nonatomic) NSDictionary *deviceList;
@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUIModel;

- (id)controlViewUIModel;
- (BOOL)buttonSelectedInBold;
- (id)clarityView;
- (id)screenCastLabel;
- (id)resultBanner;
- (void)setScreenCastLabel:(id)arg0;
- (void)setClarityView:(id)arg0;
- (void)setResultBanner:(id)arg0;
- (void)setButtonSelectedInBold:(BOOL)arg0;
- (void)setControlViewUIModel:(id)arg0;
- (id)colorPalette;
- (void)setColorPalette:(id)arg0;
- (id)searchList;
- (void)setSearchList:(id)arg0;
- (id)deviceList;
- (void)setDeviceList:(id)arg0;

@end
