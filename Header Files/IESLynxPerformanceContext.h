//
//     Generated by private class-dump
//

@class NSString, NSArray, UIView;

@interface IESLynxPerformanceContext : NSObject {
    BOOL _isContainerReuse;
    UIView *_lynxView;
    NSString *_currentNativeVC;
    NSString *_navigationID;
    NSString *_url;
    NSString *_containerType;
    NSString *_cardVersion;
    NSArray *_contextBlockList;
    NSArray *_containerUUIDList;
    NSString *_virtualAid;
    long long _attachTS;
    long long _detachTS;
}

@property (weak) UIView *lynxView;
@property (copy) NSString *currentNativeVC;
@property (copy) NSString *navigationID;
@property (copy) NSString *url;
@property (copy) NSString *containerType;
@property (copy) NSString *cardVersion;
@property (retain) NSArray *contextBlockList;
@property (retain) NSArray *containerUUIDList;
@property (copy) NSString *virtualAid;
@property (nonatomic) BOOL isContainerReuse;
@property (nonatomic) long long attachTS;
@property (nonatomic) long long detachTS;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)setVirtualAid:(id)arg0;
- (id)virtualAid;
- (id)cardVersion;
- (id)containerUUIDList;
- (void)setNavigationID:(id)arg0;
- (id)contextBlockList;
- (void)setContextBlockList:(id)arg0;
- (void)setContainerUUIDList:(id)arg0;
- (id)fetchCurrentAttachVCName;
- (id)fetchCustomBaseContext:(id)arg0;
- (id)currentNativeVC;
- (void)setCurrentNativeVC:(id)arg0;
- (long long)attachTS;
- (id)navigationID;
- (BOOL)isContainerReuse;
- (long long)detachTS;
- (void)setCardVersion:(id)arg0;
- (void)setIsContainerReuse:(BOOL)arg0;
- (void)setAttachTS:(long long)arg0;
- (id)toNativeBase;
- (void)setDetachTS:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUrl:(id)arg0;
- (void)dealloc;
- (id)url;
- (id)containerType;
- (void)setContainerType:(id)arg0;

@end
