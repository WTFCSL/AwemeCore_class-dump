//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEInteractionUserModel : MTLModel <MTLJSONSerializing> {
    NSArray *_urlList;
    NSString *_userID;
}

@property (retain, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end
