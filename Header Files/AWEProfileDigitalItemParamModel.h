//
//     Generated by private class-dump
//

@class AWEUserModel, AWEProfileDigitalAreaModel;

@interface AWEProfileDigitalItemParamModel : NSObject {
    long long _index;
    long long _total;
    AWEUserModel *_userModel;
    AWEProfileDigitalAreaModel *_model;
}

@property (nonatomic) long long index;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileDigitalAreaModel *model;

- (void)setModel:(id)arg0;
- (long long)total;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (long long)index;
- (void)setTotal:(long long)arg0;

@end
