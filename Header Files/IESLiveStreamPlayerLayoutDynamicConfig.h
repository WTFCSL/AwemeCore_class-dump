//
//     Generated by private class-dump
//

@class IESLiveStreamPlayerLayoutAlignModeWrapper, NSString, IESLiveStreamPlayerLayoutContentFrame;

@interface IESLiveStreamPlayerLayoutDynamicConfig : MTLModel <MTLJSONSerializing> {
    IESLiveStreamPlayerLayoutContentFrame *_contentFrame;
    long long _topAvoidType;
    long long _bottomAvoidType;
    long long _scaleType;
    IESLiveStreamPlayerLayoutAlignModeWrapper *_big;
    IESLiveStreamPlayerLayoutAlignModeWrapper *_small;
}

@property (retain, nonatomic) IESLiveStreamPlayerLayoutContentFrame *contentFrame;
@property (nonatomic) long long topAvoidType;
@property (nonatomic) long long bottomAvoidType;
@property (nonatomic) long long scaleType;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutAlignModeWrapper *big;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutAlignModeWrapper *small;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentFrameJSONTransformer;
+ (id)bigJSONTransformer;
+ (id)smallJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)configWithDictionary:(id)arg0;

- (id)big;
- (long long)topAvoidType;
- (long long)bottomAvoidType;
- (void)setTopAvoidType:(long long)arg0;
- (void)setBottomAvoidType:(long long)arg0;
- (void)setBig:(id)arg0;
- (void)setContentFrame:(id)arg0;
- (id)contentFrame;
- (void).cxx_destruct;
- (id)small;
- (void)setSmall:(id)arg0;
- (long long)scaleType;
- (void)setScaleType:(long long)arg0;

@end