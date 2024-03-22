//
//     Generated by private class-dump
//

@class NSString, HTSLiveDress;

@interface IESLiveMultiBaseResourceManager : NSObject {
    int _playMode;
    int _dressType;
    NSString *_dressId;
    HTSLiveDress *_dress;
    id /* block */ _block;
}

@property (nonatomic) int playMode;
@property (copy, nonatomic) NSString *dressId;
@property (nonatomic) int dressType;
@property (retain, nonatomic) HTSLiveDress *dress;
@property (copy, nonatomic) id /* block */ block;

- (id)dressId;
- (void)setDressId:(id)arg0;
- (int)dressType;
- (void)setDressType:(int)arg0;
- (id)dress;
- (void)fetchEffectList:(id)arg0 completion:(id /* block */)arg1;
- (void)setDidUpdateDress:(id /* block */)arg0;
- (void)updateDressId:(id)arg0 dressType:(int)arg1;
- (void)handleFetchDressResponse:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)fetchDress:(id /* block */)arg0;
- (void)setDress:(id)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id /* block */)block;
- (void)setPlayMode:(int)arg0;
- (int)playMode;

@end