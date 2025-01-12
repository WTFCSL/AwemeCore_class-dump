//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, UIResponder, NSIndexPath;

@protocol IESECGoodsDetailEvent <NSObject>

@property (retain, nonatomic) UIResponder *sender;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *componentUniqueID;
@property (copy, nonatomic) NSString *componentEventUniqueID;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id userInfoContext;
@property (retain, nonatomic) NSMutableDictionary *trackContext;
@property (nonatomic) BOOL shouldRefreshView;
@property (nonatomic) BOOL needCheckLogin;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)needCheckLogin;
- (void)setUserInfoContext:(id)arg0;
- (id)userInfoContext;
- (id)componentEventUniqueID;
- (void)setComponentEventUniqueID:(id)arg0;
- (void)setComponentUniqueID:(id)arg0;
- (void)setShouldRefreshView:(BOOL)arg0;
- (id)componentUniqueID;
- (BOOL)shouldRefreshView;
- (void)setNeedCheckLogin:(BOOL)arg0;
- (void)setSender:(id)arg0;
- (id)sender;
- (unsigned long long)eventType;
- (void)setIndexPath:(id)arg0;
- (id)indexPath;
- (void)setEventType:(unsigned long long)arg0;

@end
