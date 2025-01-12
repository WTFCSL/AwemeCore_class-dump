//
//     Generated by private class-dump
//

@class BDSCClarityViewUIModel, BDSCControlViewUIModel, NSDictionary, BDSCSearchListUIModel, NSString, BDByteScreenCastLabel;

@interface BDSCUIDefaultConfigDouyinLiveLight : NSObject <BDSCUIDefaultConfigProtocol> {
    BOOL _buttonSelectedInBold;
    BDByteScreenCastLabel *_screenCastLabel;
    BDSCSearchListUIModel *_searchList;
    BDSCClarityViewUIModel *_clarityView;
    BDSCControlViewUIModel *_controlViewUIModel;
    NSDictionary *_resultBanner;
    NSDictionary *_colorPalette;
    NSDictionary *_deviceList;
}

@property (retain, nonatomic) BDByteScreenCastLabel *screenCastLabel;
@property (retain, nonatomic) BDSCSearchListUIModel *searchList;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityView;
@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUIModel;
@property (copy, nonatomic) NSDictionary *resultBanner;
@property (nonatomic) BOOL buttonSelectedInBold;
@property (copy, nonatomic) NSDictionary *colorPalette;
@property (copy, nonatomic) NSDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;
- (id)colorPalette;
- (void)setColorPalette:(id)arg0;
- (id)searchList;
- (void)setSearchList:(id)arg0;
- (id)deviceList;
- (void)setDeviceList:(id)arg0;

@end
