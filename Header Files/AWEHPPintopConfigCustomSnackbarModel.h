//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHPPintopConfigCustomSnackbarModel : MTLModel <MTLJSONSerializing> {
    NSString *_fromComponentID;
    NSString *_toComponentID;
    long long _stayTime;
}

@property (copy, nonatomic) NSString *fromComponentID;
@property (copy, nonatomic) NSString *toComponentID;
@property (nonatomic) long long stayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStayTime:(long long)arg0;
- (long long)stayTime;
- (id)fromComponentID;
- (id)toComponentID;
- (void)setFromComponentID:(id)arg0;
- (void)setToComponentID:(id)arg0;
- (void).cxx_destruct;

@end
