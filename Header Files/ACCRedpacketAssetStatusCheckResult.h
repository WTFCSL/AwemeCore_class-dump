//
//     Generated by private class-dump
//

@class NSString;

@interface ACCRedpacketAssetStatusCheckResult : ACCFlowerRedPacketDataServiceResult {
    unsigned long long _assetStausType;
    NSString *_alertTip;
}

@property (nonatomic) unsigned long long assetStausType;
@property (copy, nonatomic) NSString *alertTip;

- (unsigned long long)assetStausType;
- (void)setAssetStausType:(unsigned long long)arg0;
- (id)alertTip;
- (void)setAlertTip:(id)arg0;
- (void).cxx_destruct;

@end
