//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCURLModelProtocol;

@interface ACCVideoMusicCategoryModel : MTLModel <MTLJSONSerializing> {
    BOOL _isHot;
    NSString *_idStr;
    NSString *_name;
    id<ACCURLModelProtocol> _cover;
    id<ACCURLModelProtocol> _awemeCover;
    long long _level;
}

@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id<ACCURLModelProtocol> cover;
@property (retain, nonatomic) id<ACCURLModelProtocol> awemeCover;
@property (nonatomic) BOOL isHot;
@property (nonatomic) long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)awemeCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (BOOL)isHot;
- (void)setIsHot:(BOOL)arg0;
- (id)awemeCover;
- (void)setAwemeCover:(id)arg0;
- (void)setLevel:(long long)arg0;
- (long long)level;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (id)idStr;
- (void)setIdStr:(id)arg0;

@end
