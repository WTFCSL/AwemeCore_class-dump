//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDNewFriendWorkCountModel : AWEBaseApiModel {
    NSArray *_friendList;
    NSString *_toastText;
}

@property (retain, nonatomic) NSArray *friendList;
@property (copy, nonatomic) NSString *toastText;

+ (id)friendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (id)friendList;
- (void)setFriendList:(id)arg0;
- (void).cxx_destruct;

@end