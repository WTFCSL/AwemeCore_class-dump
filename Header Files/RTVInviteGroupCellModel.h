//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface RTVInviteGroupCellModel : NSObject <RxPrimaryKey, RTVUICellModelDiffableInterface> {
    BOOL _selected;
    NSString *_identifier;
    NSString *_name;
    NSURL *_avatarURL;
    long long _lastActiveTime;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *avatarURL;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) long long lastActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (id)avatarURL;
- (void)updateSelected:(BOOL)arg0;
- (id)initWithIdentifier:(id)arg0 name:(id)arg1 avatarURL:(id)arg2 selected:(BOOL)arg3;
- (BOOL)joinDiffCalculate;
- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)name;
- (BOOL)isSelected;
- (long long)lastActiveTime;
- (void)setLastActiveTime:(long long)arg0;

@end
