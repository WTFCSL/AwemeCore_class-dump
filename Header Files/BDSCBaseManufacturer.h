//
//     Generated by private class-dump
//

@class NSString, BDSCManufacturerInfo;

@interface BDSCBaseManufacturer : NSObject <BDSCManufacturerProtocol> {
    BDSCManufacturerInfo *_manufacturerInfo;
    BDSCManufacturerInfo *_connectedManufacturerInfo;
}

@property (retain, nonatomic) BDSCManufacturerInfo *manufacturerInfo;
@property (retain, nonatomic) BDSCManufacturerInfo *connectedManufacturerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manufacturerWithManufacturerInfo:(id)arg0 connectedManufacturerInfo:(id)arg1;

- (void)setManufacturerInfo:(id)arg0;
- (void)setConnectedManufacturerInfo:(id)arg0;
- (id)initWithManufacturerInfo:(id)arg0 connectedManufacturerInfo:(id)arg1;
- (id)manufacturerInfo;
- (id)connectedManufacturerInfo;
- (id)substringOfSourceString:(id)arg0 startString:(id)arg1 endString:(id)arg2;
- (id)getPlayManufacturerCommand;
- (BOOL)isSupportToJumpXsg;
- (id)mediaUrlStringWithPlayItem:(id)arg0 context:(id)arg1;
- (id)manufacturerDescWithPlayItem:(id)arg0;
- (void)processByteCastPlayerItem:(id)arg0 withUrl:(id)arg1;
- (void).cxx_destruct;

@end