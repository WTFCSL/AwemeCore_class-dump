//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary;

@interface AWEEcomSearchTrackParamsBuilder : NSObject {
    NSMutableDictionary *_innerParams;
}

@property (readonly, nonatomic) NSMutableDictionary *innerParams;
@property (readonly, nonatomic) id /* block */ searchID;
@property (readonly, nonatomic) id /* block */ logPb;
@property (readonly, nonatomic) id /* block */ rank;
@property (retain, nonatomic) NSMutableDictionary *innerParams;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) id /* block */ addKVPair;
@property (readonly, nonatomic) id /* block */ addKVString;
@property (readonly, nonatomic) id /* block */ addKVDict;
@property (readonly, nonatomic) id /* block */ addKVArray;
@property (readonly, nonatomic) id /* block */ addKVInteger;
@property (readonly, nonatomic) id /* block */ mergeDict;

+ (id)builderWithBlock:(id /* block */)arg0;

- (id /* block */)logPb;
- (id /* block */)mergeDict;
- (id)innerParams;
- (void)setInnerParams:(id)arg0;
- (id /* block */)addKVPair;
- (id /* block */)addKVString;
- (id /* block */)addKVDict;
- (id /* block */)addKVArray;
- (id /* block */)addKVInteger;
- (id)init;
- (id /* block */)rank;
- (void).cxx_destruct;
- (id)params;
- (id /* block */)searchID;

@end