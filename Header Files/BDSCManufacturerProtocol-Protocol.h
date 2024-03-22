//
//     Generated by private class-dump
//

@class BDSCManufacturerInfo;

@protocol BDSCManufacturerProtocol <NSObject>

+ (id)manufacturerWithManufacturerInfo:(id)arg0 connectedManufacturerInfo:(id)arg1;

@property (readonly, nonatomic) BDSCManufacturerInfo *manufacturerInfo;
@property (readonly, nonatomic) BDSCManufacturerInfo *connectedManufacturerInfo;

- (id)manufacturerInfo;
- (id)connectedManufacturerInfo;
- (BOOL)isSupportToJumpXsg;
- (id)mediaUrlStringWithPlayItem:(id)arg0 context:(id)arg1;
- (id)manufacturerDescWithPlayItem:(id)arg0;
- (void)processByteCastPlayerItem:(id)arg0 withUrl:(id)arg1;

@end