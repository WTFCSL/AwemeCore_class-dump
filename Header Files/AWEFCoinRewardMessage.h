//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFCoinRewardMessage : MTLModel <MTLJSONSerializing> {
    NSString *_normal;
    NSString *_edge;
}

@property (copy, nonatomic) NSString *normal;
@property (copy, nonatomic) NSString *edge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)edge;
- (void)setEdge:(id)arg0;
- (void).cxx_destruct;
- (id)normal;
- (void)setNormal:(id)arg0;

@end
