//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol IESLiveInteractVideoCaptureSEIParserProtocol <IESLiveSEIParserResult, MTLJSONSerializing>

@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long singMode;
@property (copy, nonatomic) NSString *linkID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL cameraOpen;

- (void)setCameraOpen:(BOOL)arg0;
- (BOOL)cameraOpen;
- (unsigned long long)singMode;
- (void)setSingMode:(unsigned long long)arg0;
- (id)timestamp;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg0;
- (void)setTimestamp:(id)arg0;
- (id)linkID;
- (void)setLinkID:(id)arg0;

@end
