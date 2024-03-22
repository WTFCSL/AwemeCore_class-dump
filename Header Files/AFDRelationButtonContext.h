//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AFDRelationButtonContext : NSObject {
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_referString;
    long long _channelID;
    long long _fromPageType;
    long long _prePageType;
    NSString *_lightActionSource;
    NSString *_lightActionEnterMethod;
    UIView *_actionDestinationView;
    UIView *_actionContainerView;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long channelID;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (copy, nonatomic) NSString *lightActionSource;
@property (copy, nonatomic) NSString *lightActionEnterMethod;
@property (weak, nonatomic) UIView *actionDestinationView;
@property (weak, nonatomic) UIView *actionContainerView;

+ (id)instanceWithBlock:(id /* block */)arg0;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)setPrePageType:(long long)arg0;
- (void)setFromPageType:(long long)arg0;
- (long long)fromPageType;
- (long long)prePageType;
- (id)lightActionSource;
- (void)setLightActionSource:(id)arg0;
- (id)lightActionEnterMethod;
- (void)setLightActionEnterMethod:(id)arg0;
- (id)actionDestinationView;
- (void)setActionDestinationView:(id)arg0;
- (id)actionContainerView;
- (void)setActionContainerView:(id)arg0;
- (long long)channelID;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg0;
- (void)setChannelID:(long long)arg0;

@end