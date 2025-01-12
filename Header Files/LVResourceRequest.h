//
//     Generated by private class-dump
//

@class NSString;
@protocol LVResourceRequestDelegate;

@interface LVResourceRequest : NSObject {
    NSString *_resourceID;
    NSString *_categoryID;
    NSString *_categoryName;
    unsigned long long _realType;
    unsigned long long _type;
    id /* block */ _callback;
    id<LVResourceRequestDelegate> _delegate;
    NSString *_cachePath;
}

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) unsigned long long realType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ callback;
@property (weak, nonatomic) id<LVResourceRequestDelegate> delegate;
@property (copy, nonatomic) NSString *cachePath;

- (unsigned long long)realType;
- (void)setRealType:(unsigned long long)arg0;
- (void)setResourceID:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id)categoryID;
- (id)resourceID;
- (id /* block */)callback;
- (unsigned long long)type;
- (id)identifier;
- (void)setType:(unsigned long long)arg0;
- (id)delegate;
- (void)setCategoryID:(id)arg0;
- (id)cachePath;
- (void)setDelegate:(id)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (void)setCachePath:(id)arg0;

@end
