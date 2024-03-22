//
//     Generated by private class-dump
//

@interface BDCReaderMonitor : NSObject

+ (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (id /* block */)bdcr_pic_info_load_duration:(id)arg0 pageContext:(id)arg1;
+ (void)bdcr_pic_info_load_status:(int)arg0 bookId:(id)arg1 pageContext:(id)arg2;
+ (id /* block */)bdcr_comics_info_load_duration:(id)arg0;
+ (void)bdcr_comics_info_load_status:(int)arg0 bookId:(id)arg1;
+ (id /* block */)bdcr_chapter_content_load_duration:(id)arg0 chapterId:(id)arg1;
+ (void)bdcr_chapter_content_load_status:(int)arg0 bookId:(id)arg1 chapterId:(id)arg2;
+ (id /* block */)bdcr_first_enter_duration:(id)arg0;
+ (void)bdcr_sdk_launch:(id)arg0;

@end