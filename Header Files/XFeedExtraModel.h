//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface XFeedExtraModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_now;
    NSString *_logid;
}

@property (retain, nonatomic) NSNumber *now;
@property (retain, nonatomic) NSString *logid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logid;
- (void)setLogid:(id)arg0;
- (id)now;
- (void).cxx_destruct;
- (void)setNow:(id)arg0;

@end