//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAntiAddictNormalMaskVideoInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_aid;
    NSNumber *_type;
    NSNumber *_loopTime;
    NSString *_text;
    NSString *_url;
}

@property (readonly, copy, nonatomic) NSString *aid;
@property (readonly, copy, nonatomic) NSNumber *type;
@property (readonly, copy, nonatomic) NSNumber *loopTime;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)loopTime;
- (void).cxx_destruct;
- (id)type;
- (id)text;
- (id)url;
- (id)aid;

@end
