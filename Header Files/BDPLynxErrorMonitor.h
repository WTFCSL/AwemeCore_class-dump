//
//     Generated by private class-dump
//

@class BDPLynxProductInfo;

@interface BDPLynxErrorMonitor : NSObject {
    BDPLynxProductInfo *_productInfo;
}

@property (retain, nonatomic) BDPLynxProductInfo *productInfo;

- (void)modifyJsonObject:(id)arg0;
- (void)sendDataToServer:(id)arg0;
- (void)reportError:(id)arg0 extra:(id)arg1;
- (id)productInfo;
- (void).cxx_destruct;
- (void)setProductInfo:(id)arg0;
- (id)initWithProductInfo:(id)arg0;

@end
