//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWESpecialCardPitayaCacheItem : NSObject {
    BOOL _isForce;
    AWEAwemeModel *_model;
    long long _index;
    long long _requestType;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isForce;
@property (nonatomic) long long requestType;

- (BOOL)isForce;
- (void)setIsForce:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setRequestType:(long long)arg0;
- (void).cxx_destruct;
- (long long)requestType;
- (id)model;
- (long long)index;

@end