//
//     Generated by private class-dump
//

@class NSString;

@interface AWERTVFeedCastTypeItemModel : NSObject {
    BOOL _casting;
    long long _castType;
    NSString *_iconName;
    NSString *_title;
}

@property (readonly, nonatomic) long long castType;
@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isCasting) BOOL casting;

- (BOOL)isCasting;
- (id)initWithType:(long long)arg0 iconName:(id)arg1 title:(id)arg2 casting:(BOOL)arg3;
- (long long)castType;
- (void).cxx_destruct;
- (id)title;
- (id)iconName;

@end
