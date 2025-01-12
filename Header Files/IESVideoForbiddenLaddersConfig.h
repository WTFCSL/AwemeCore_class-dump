//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESVideoForbiddenLaddersConfig : MTLModel <MTLJSONSerializing> {
    NSArray *_forbiddenLaddersVQ;
    NSArray *_forbiddenLaddersBitratelt;
    NSArray *_forbiddenLaddersBitrategt;
    NSArray *_forbiddenLaddersCodec;
}

@property (retain, nonatomic) NSArray *forbiddenLaddersVQ;
@property (retain, nonatomic) NSArray *forbiddenLaddersBitratelt;
@property (retain, nonatomic) NSArray *forbiddenLaddersBitrategt;
@property (retain, nonatomic) NSArray *forbiddenLaddersCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)forbiddenLaddersVQ;
- (void)setForbiddenLaddersVQ:(id)arg0;
- (id)forbiddenLaddersBitratelt;
- (void)setForbiddenLaddersBitratelt:(id)arg0;
- (id)forbiddenLaddersBitrategt;
- (void)setForbiddenLaddersBitrategt:(id)arg0;
- (id)forbiddenLaddersCodec;
- (void)setForbiddenLaddersCodec:(id)arg0;
- (void).cxx_destruct;

@end
