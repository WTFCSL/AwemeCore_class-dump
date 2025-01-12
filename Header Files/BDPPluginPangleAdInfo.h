//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, BDPPangleBannerMonitor;

@interface BDPPluginPangleAdInfo : BDPPluginAppAdInfo {
    NSString *_adUnitID;
    BDPUniqueID *_uniqueID;
    BDPPangleBannerMonitor *_monitor;
    struct CGSize { double width; double height; } _adSize;
}

@property (retain, nonatomic) NSString *adUnitID;
@property (nonatomic) struct CGSize { double width; double height; } adSize;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPPangleBannerMonitor *monitor;

- (void)setAdSize:(struct CGSize { double x0; double x1; })arg0;
- (id)adUnitID;
- (void)setAdUnitID:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)monitor;
- (void)setUniqueID:(id)arg0;
- (void)setMonitor:(id)arg0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })adSize;

@end
