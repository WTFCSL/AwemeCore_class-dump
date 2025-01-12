//
//     Generated by private class-dump
//

@class NSString, BDPRegionPickerView;

@interface BDPPluginRegionPickerImpl : NSObject <BDPRegionPickerPluginDelegate> {
    BDPRegionPickerView *_pickerView;
}

@property (retain, nonatomic) BDPRegionPickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_showRegionPickerViewWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_updateRegionPickerViewWithModel:(id)arg0 animated:(BOOL)arg1;
- (void)bdp_dismissRegionPickerViewAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)pickerView;
- (void)setPickerView:(id)arg0;

@end
