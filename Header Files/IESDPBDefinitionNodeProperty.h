//
//     Generated by private class-dump
//

@class NSString;

@interface IESDPBDefinitionNodeProperty : NSObject {
    BOOL _repeat;
    long long _tag;
    long long _type;
    NSString *_fq;
    IESDPBDefinitionNodeProperty *_k;
    IESDPBDefinitionNodeProperty *_v;
}

@property (nonatomic) long long tag;
@property (nonatomic) long long type;
@property (nonatomic) BOOL repeat;
@property (copy, nonatomic) NSString *fq;
@property (retain, nonatomic) IESDPBDefinitionNodeProperty *k;
@property (retain, nonatomic) IESDPBDefinitionNodeProperty *v;

- (id)fq;
- (void)setFq:(id)arg0;
- (void)setV:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setTag:(long long)arg0;
- (long long)tag;
- (void)setType:(long long)arg0;
- (id)k;
- (void)setK:(id)arg0;
- (id)v;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg0;

@end
