//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTODualCameraModel : MTLModel <MTLJSONSerializing> {
    BOOL _isDual;
    BOOL _isReal;
    NSString *_subTrackPath;
    long long _firstCameraPosition;
}

@property (nonatomic) BOOL isDual;
@property (copy, nonatomic) NSString *subTrackPath;
@property (nonatomic) BOOL isReal;
@property (nonatomic) long long firstCameraPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDual;
- (void)setIsDual:(BOOL)arg0;
- (id)subTrackPath;
- (void)setSubTrackPath:(id)arg0;
- (BOOL)isReal;
- (void)setIsReal:(BOOL)arg0;
- (long long)firstCameraPosition;
- (void)setFirstCameraPosition:(long long)arg0;
- (void).cxx_destruct;

@end
