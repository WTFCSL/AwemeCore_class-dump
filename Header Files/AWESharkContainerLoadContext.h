//
//     Generated by private class-dump
//

@class NSString, AWESharkLoadResult;

@interface AWESharkContainerLoadContext : NSObject {
    BOOL _reuse;
    AWESharkLoadResult *_result;
    NSString *_schema;
    NSString *_loadType;
    NSString *_cardID;
    double _loadStartedTs;
    double _loadFinishedTs;
}

@property (retain, nonatomic) AWESharkLoadResult *result;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *loadType;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) BOOL reuse;
@property (nonatomic) double loadStartedTs;
@property (nonatomic) double loadFinishedTs;

- (void)setReuse:(BOOL)arg0;
- (BOOL)reuse;
- (void)setLoadType:(id)arg0;
- (void)setLoadStartedTs:(double)arg0;
- (void)setLoadFinishedTs:(double)arg0;
- (double)loadFinishedTs;
- (double)loadStartedTs;
- (void)setSchema:(id)arg0;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (id)schema;
- (id)loadType;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end