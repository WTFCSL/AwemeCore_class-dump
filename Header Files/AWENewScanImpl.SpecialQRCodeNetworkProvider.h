//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWENewScanImpl.SpecialQRCodeNetworkProvider : AWEDataLayerMantlePostMethodNetworkProvider {
    void /* unknown type, empty encoding */ schemeType;
    void /* unknown type, empty encoding */ itemID;
    void /* unknown type, empty encoding */ useRebrandStyle;
    void /* unknown type, empty encoding */ extraInfo;
}

@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSDictionary *extraInfo;

+ (id)businessURI;

- (void)setExtraInfo:(id)arg0;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)extraInfo;

@end