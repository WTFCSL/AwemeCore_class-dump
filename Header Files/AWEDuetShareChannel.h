//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEDuetShareChannel : AWEShareBaseChannel {
    BOOL _isDuetSing;
    AWEAwemeModel *_refreshedAwemeModel;
}

@property (retain, nonatomic) AWEAwemeModel *refreshedAwemeModel;
@property (nonatomic) BOOL isDuetSing;

+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;

- (BOOL)isChannelEnabledWithContext:(id)arg0;
- (BOOL)isDuetSing;
- (void)setIsDuetSing:(BOOL)arg0;
- (id)shareImage;
- (id)makeItemWithStyle:(unsigned long long)arg0 inView:(id)arg1;
- (BOOL)prepareToShare;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (BOOL)isShareItemEnabled;
- (void)prepareToShareWithCompletion:(id /* block */)arg0;
- (id)refreshedAwemeModel;
- (void)_beginDuet;
- (void)setRefreshedAwemeModel:(id)arg0;
- (BOOL)share;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end
