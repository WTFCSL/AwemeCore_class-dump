//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEPOICommentDraftCacheInfo : NSObject <NSCoding> {
    NSString *_commentID;
    NSDate *_saveDate;
}

@property (copy, nonatomic) NSString *commentID;
@property (retain, nonatomic) NSDate *saveDate;

- (id)commentID;
- (void)setCommentID:(id)arg0;
- (void)setSaveDate:(id)arg0;
- (id)saveDate;
- (long long)compareBySaveDate:(id)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
